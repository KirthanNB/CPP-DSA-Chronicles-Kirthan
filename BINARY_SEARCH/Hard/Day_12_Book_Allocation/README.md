📚 Book Allocation Problem

📖 Problem Statement

You are given an array arr[] of integers, where each element arr[i] represents the number of pages in the ith book. You also have an integer k representing the number of students. The task is to allocate books to students while ensuring:

Each student receives at least one book.

Books are assigned in a contiguous sequence.

No book is assigned to more than one student.

The goal is to minimize the maximum number of pages allocated to any student.

🔍 Constraints

1 <= arr.size() <= 10^6

1 <= arr[i] <= 10^3

1 <= k <= 10^3

✨ Example

✅ Example 1:

Input:

arr = [12, 34, 67, 90]
k = 2

Output:

113

Explanation:
The possible allocations are:

[12] and [34, 67, 90] → Maximum Pages = 191

[12, 34] and [67, 90] → Maximum Pages = 157

[12, 34, 67] and [90] → Maximum Pages = 113

Thus, the minimum possible maximum pages a student gets is 113.

❌ Example 2:

Input:

arr = [15, 17, 20]
k = 5

Output:

-1

Explanation:
Allocation is not possible as the number of students (k=5) is greater than the number of books (n=3).

✅ Example 3:

Input:

arr = [22, 23, 67]
k = 1

Output:

112

Explanation:
Since all books must be given to a single student, the total pages assigned are 22 + 23 + 67 = 112.