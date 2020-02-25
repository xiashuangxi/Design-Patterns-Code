#include "leaf.h"

G_DEFINE_TYPE(Leaf, leaf, TYPE_COMPONENT);

void leaf_operation(Component *leaf)
{
    // COMPONENT_GET_CLASS(&leaf->component)->operation(leaf);
}

void operation(Component *leaf){
    printf("Leaf operation\n");
}

static void leaf_init(Leaf *leaf)
{
    printf("leaf_init\n");
}
static void leaf_class_init(LeafClass *klass)
{
    printf("leaf_class_init\n");
    ComponentClass *component_class = COMPONENT_CLASS(klass);
    component_class ->operation = operation;
}