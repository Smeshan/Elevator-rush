/* Corresponding header */
#include "utils/tools/AutoResLoader.h"

/* C system icnludes */
#include <dirent.h>

/* C++ system icnludes */
#include <sstream>
#include <iostream>
#include <cstdint>

/* Third-party icnludes */

/* Own icnludes */
#include "utils/common/CommonPaths.h"

std::vector<Resource> getResFromFolder(const std::string& folderPath);
std::vector<std::string> getSubFoldersFromFolder(const std::string& folderPath);

int32_t AutoResLoader::init() {
    _folders = getResSubFolders();
    return EXIT_SUCCESS;
}

std::vector<std::string> AutoResLoader::getResSubFolders() {
    // FOLDER PATTER NAME: [NAME][_][ID]
    return getSubFoldersFromFolder(RES_FOLDER_PATH);
}

std::vector<Resource> AutoResLoader::getResources(const int32_t folderId) {
    std::string folderPath;
    for (auto& folder : _folders) {
        if (folder.back() - '0' == folderId) {
            folderPath = RES_FOLDER_PATH + folder + "/";
        }
    }
    std::vector<Resource> recources;
    switch (folderId) {
    case IMAGES:
        recources = getResFromFolder(folderPath);
        break;
    case FONTS:
        recources = getResFromFolder(folderPath);
        break;
    case SOUNDS:
        recources = getResFromFolder(folderPath);
        break;
    case MUSIC:
        recources = getResFromFolder(folderPath);
        break;
    default:
        std::cerr << "There is no resource folder with ID: " << folderId << std::endl;
        break;
    }
    return recources;
}

std::vector<Resource> getResFromFolder(const std::string& folderPath) {
    std::vector<Resource> elements;
    DIR* dir;
    dirent* element;
    if ((dir = opendir(folderPath.c_str())) == nullptr) {
        std::cerr << "Could not open resource directory: "
            << folderPath << std::endl;
    }
    while ((element = readdir(dir)) != nullptr) {
        Resource res;
        const std::string currElement = element->d_name;
        if (currElement == "." || currElement == "..") {
            continue;
        }
        res.name = element->d_name;
        res.path = folderPath + res.name;
        elements.push_back(res);
    }
    closedir(dir);
    return elements;
}

std::vector<std::string> getSubFoldersFromFolder(const std::string& folderPath) {
    std::vector<std::string> subFolders;
    DIR* dir;
    dirent* folder;
    if ((dir = opendir(folderPath.c_str())) == nullptr) {
        std::cerr << "Could not open resource directory: "
            << folderPath << std::endl;
    }
    while ((folder = readdir(dir)) != nullptr) {
        const std::string currFolder = folder->d_name;
        if (currFolder == "." || currFolder == "..") {
            continue;
        }
        subFolders.push_back(currFolder);
    }
    closedir(dir);
    return subFolders;
}