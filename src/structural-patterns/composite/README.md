# Composite
```
    +--------+         +-------------+    childer
    | Client |-------->| Component   | <-------------+
    +--------+         | ----------- |   1 .. *      |
                       | operation() |               |
                       +-------------+               |
                              A           for each child in children:
                              |             child.operation();
                              |                      |
                   +----------+-----------           |
                   |                     |           |
            +-------------+       +-------------+    |
            | Leaf        |       | Composite   |    |
            | ----------- |       | ----------- | <>-+
            | operation() |       | operation() |
            +-------------+       +-------------+


```