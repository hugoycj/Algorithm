# 题目
用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。

# 思路
push操作就直接往stack1中push， pop操作需要分类一下：如果stack2为空，那么需要将stack1中的数据转移到stack2中，然后在对stack2进行pop，如果stack2不为空，直接pop就ok。