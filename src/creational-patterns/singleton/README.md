# Singleton
```
    +-----------------+
    | Singleton       |
    | --------------- |
    | - INSTANCE      |
    | --------------- | ....................
    | - Singleton()   |                    .
    | + getInstance() |                    .
    +-----------------+                    .
                    (1) private static final Singleton
                            INSTANCE = new Singleton();
                    (2) private Singleton(){}
                    (3) public static Singleton getInstance(){
                            return INSTANCE;
                        }

(1) = INSTANCE constant
(2) = private constructor
(3) = static operation
```