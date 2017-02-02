#ifndef PLUGIN_NODE_H
#define PLUGIN_NODE_H

#include <stdint.h>

#include "region.h"

enum node_split
{
    Split_None = 0,
    Split_Optimal = -1,
    Split_Vertical = 1,
    Split_Horizontal = 2
};

struct node
{
    uint32_t WindowId;
    node_split Split;
    float Ratio;

    node *Parent;
    node *Left;
    node *Right;

    region Region;
};

node_split OptimalSplitMode(node *Node);

#endif