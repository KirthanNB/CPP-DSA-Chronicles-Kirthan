[Click here to check question on website.](https://www.hackerearth.com/problem/algorithm/painters-partition/)

Fence Painting Problem

Problem Statement

Given a fence consisting of n wooden blocks, each having a number written on it (represented as an array), a painter must paint the fence following these conditions:

The painting must be done sequentially from left to right.

Colors must be used in sequential order (once a color is used, it cannot be reused).

Each color can be used to paint multiple consecutive blocks.

The sum of numbers on blocks painted with the same color must lie between l and r (both inclusive).

The task is to determine the number of ways the painter can paint the fence using at most k colors. The result should be given modulo 10^9 + 7.

Input Format

First line: Three space-separated integers representing n, k, and s.

Second line: n space-separated integers representing the array arr.

Output Format

Print a single integer representing the number of valid ways to paint the fence, modulo 10^9 + 7.

Constraints

1 <= n <= 100

1 <= k <= 10

1 <= l <= r <= 1000

1 <= arr[i] <= 100

Sample Input

5 3 12
3 5 1 2 6

Sample Output

8