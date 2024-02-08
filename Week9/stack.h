#ifndef STACK_H
#define STACK_H

namespace stack
{
    struct stack_t; // The forward declared type

    constexpr int SIZE{8}; // Length of the array used as a stack

    /**
     * @brief This function is used to create a stack
     *
     * @return stack_t* nullptr if an error occurs else a pointer to the created stack.
     */
    stack_t *create(void);

    /**
     * @brief This function is used to insert an element into a stack.
     *
     * @param stck A pointer to the stack
     * @param value The data to push to the stack
     * @return bool false if the stack is full; otherwise true
     */
    bool push(stack_t *stck, int value);

    int available(stack_t *stck);

    /**
     * @brief This function is used to pop the top element from a stack
     *
     * @param stck A pointer to the stack
     * @param data A reference to placeholder to fill with the top element
     * @return bool - false if the stack is empty; otherwise true
     */
    bool pop(stack_t *stck, int &elem);

    /**
     * @brief This function is used to clear a stack
     *
     * @param stck A pointer to the stack
     */
    void clear(stack_t *stck);

    /**
     * @brief This function is used to destroy a stack
     *
     * @param stck A reference to a pointer to the stack
     */
    void destroy(stack_t *&stck);
}

#endif /* STACK_H */