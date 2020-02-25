#include <stdio.h>

#include "component.h"
#include "composite.h"
#include "default_composite.h"
#include "leaf.h"

int main(void)
{
    printf("Composite Test ... \n");

    Leaf *leaf1 = g_object_new(TYPE_LEAF, NULL);
    Leaf *leaf2 = g_object_new(TYPE_LEAF, NULL);
    Leaf *leaf3 = g_object_new(TYPE_LEAF, NULL);

    DefaultComposite *default_composite = g_object_new(TYPE_DEFAULT_COMPOSITE , NULL);
    default_composite_add(default_composite, &leaf1->component);
    default_composite_add(default_composite, &leaf2->component);
    default_composite_add(default_composite, &leaf3->component);

    default_composite_operation(default_composite);
    printf("Composite Test end ... \n");
}