//
// Created by alon on 21/12/18.
//

#ifndef AP1_SEMETSER_PROJECT_GENERICFUNCTIONS_H
#define AP1_SEMETSER_PROJECT_GENERICFUNCTIONS_H

#include <queue>
#include <vector>
#include <utility>
#include <algorithm>

template <typename T>
bool indexWithinVectorRange(unsigned index, const std::vector<T>& vector);

template <typename T>
void pushFromVectorToQueue(const std::vector<T> &vector, std::queue<T> &outQueue);

#endif //AP1_SEMETSER_PROJECT_GENERICFUNCTIONS_H
