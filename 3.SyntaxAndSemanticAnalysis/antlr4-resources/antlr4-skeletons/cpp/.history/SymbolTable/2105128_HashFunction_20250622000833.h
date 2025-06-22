#include <bits/stdc++.h>
using namespace std;

#pragma once
class HashFunction
{
public:
    unsigned int sdbmHash(const char *p,int num_bucket);
    unsigned int count_unique_substrings(string str, unsigned int num_buckets);
    unsigned int joaat(string str, unsigned int num_buckets);
    unsigned int djb2(string str, unsigned int num_buckets);
};