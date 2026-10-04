# NeetCode 150 — Checklist & Table of Contents

_Total problems: **151**_


## Arrays And Hashing (9)

- [x] Contains Duplicate — LeetCode #217
- [ ] Valid Anagram — LeetCode #242
- [ ] Two Sum — LeetCode #1
- [ ] Group Anagrams — LeetCode #49
- [ ] Top K Frequent Elements — LeetCode #347
- [ ] Product of Array Except Self — LeetCode #238
- [ ] Valid Sudoku — LeetCode #36
- [ ] Encode And Decode Strings — LeetCode #271
- [ ] Longest Consecutive Sequence — LeetCode #128

_Some Notes on This Section:_
Hash maps provide constant time element lookup; you can check that you have come across specific elements in constant time. If counting element frequency, use a hash map. If you're checking element existence, use a set (also hashed elements, so constant time lookup)

## Two Pointers (5)

- [ ] Valid Palindrome — LeetCode #125
- [ ] Two Sum II Input Array Is Sorted — LeetCode #167
- [ ] 3Sum — LeetCode #15
- [ ] Container With Most Water — LeetCode #11
- [ ] Trapping Rain Water — LeetCode #42

_Some Notes on This Section:_
Two pointer problems typically start with pointers on opposite edges of the iterable object. You typically initialize both of the pointers to the start of the iterable object when you're doing a sliding window problem.

With this in mind, it's always best to start by trying to define your subproblem as some vertical slice of the interable object, or by the edges defined by the pointers. The "Trapping Rain Water" problem really tested my problem solving ability. Only when I clearly defined a bucket as some elevation < both edges did the solution start to formulate.

## Sliding Window (6)

- [ ] Best Time to Buy And Sell Stock — LeetCode #121
- [ ] Longest Substring Without Repeating Characters — LeetCode #3
- [ ] Longest Repeating Character Replacement — LeetCode #424
- [ ] Permutation In String — LeetCode #567
- [ ] Minimum Window Substring — LeetCode #76
- [ ] Sliding Window Maximum — LeetCode #239

## Stack (7)

- [ ] Valid Parentheses — LeetCode #20
- [ ] Min Stack — LeetCode #155
- [ ] Evaluate Reverse Polish Notation — LeetCode #150
- [ ] Generate Parentheses — LeetCode #22
- [ ] Daily Temperatures — LeetCode #739
- [ ] Car Fleet — LeetCode #853
- [ ] Largest Rectangle In Histogram — LeetCode #84

## Binary Search (7)

- [ ] Binary Search — LeetCode #704
- [ ] Search a 2D Matrix — LeetCode #74
- [ ] Koko Eating Bananas — LeetCode #875
- [ ] Search In Rotated Sorted Array — LeetCode #33
- [ ] Find Minimum In Rotated Sorted Array — LeetCode #153
- [ ] Time Based Key Value Store — LeetCode #981
- [ ] Median of Two Sorted Arrays — LeetCode #4

## Linked List (11)

- [ ] Reverse Linked List — LeetCode #206
- [ ] Merge Two Sorted Lists — LeetCode #21
- [ ] Reorder List — LeetCode #143
- [ ] Remove Nth Node From End of List — LeetCode #19
- [ ] Copy List With Random Pointer — LeetCode #138
- [ ] Add Two Numbers — LeetCode #2
- [ ] Linked List Cycle — LeetCode #141
- [ ] Find The Duplicate Number — LeetCode #287
- [ ] LRU Cache — LeetCode #146
- [ ] Merge K Sorted Lists — LeetCode #23
- [ ] Reverse Nodes In K Group — LeetCode #25

## Trees (15)

- [ ] Invert Binary Tree — LeetCode #226
- [ ] Maximum Depth of Binary Tree — LeetCode #104
- [ ] Diameter of Binary Tree — LeetCode #543
- [ ] Balanced Binary Tree — LeetCode #110
- [ ] Same Tree — LeetCode #100
- [ ] Subtree of Another Tree — LeetCode #572
- [ ] Lowest Common Ancestor of a Binary Search Tree — LeetCode #235
- [ ] Binary Tree Level Order Traversal — LeetCode #102
- [ ] Binary Tree Right Side View — LeetCode #199
- [ ] Count Good Nodes In Binary Tree — LeetCode #1448
- [ ] Validate Binary Search Tree — LeetCode #98
- [ ] Kth Smallest Element In a Bst — LeetCode #230
- [ ] Construct Binary Tree From Preorder And Inorder Traversal — LeetCode #105
- [ ] Binary Tree Maximum Path Sum — LeetCode #124
- [ ] Serialize And Deserialize Binary Tree — LeetCode #297

## Tries (3)

- [ ] Implement Trie Prefix Tree — LeetCode #208
- [ ] Design Add And Search Words Data Structure — LeetCode #211
- [ ] Word Search II — LeetCode #212

## Heap / Priority Queue (7)

- [ ] Kth Largest Element In a Stream — LeetCode #703
- [ ] Last Stone Weight — LeetCode #1046
- [ ] K Closest Points to Origin — LeetCode #973
- [ ] Kth Largest Element In An Array — LeetCode #215
- [ ] Task Scheduler — LeetCode #621
- [ ] Design Twitter — LeetCode #355
- [ ] Find Median From Data Stream — LeetCode #295

## Backtracking (9)

- [ ] Subsets — LeetCode #78
- [ ] Combination Sum — LeetCode #39
- [ ] Permutations — LeetCode #46
- [ ] Subsets II — LeetCode #90
- [ ] Combination Sum II — LeetCode #40
- [ ] Word Search — LeetCode #79
- [ ] Palindrome Partitioning — LeetCode #131
- [ ] Letter Combinations of a Phone Number — LeetCode #17
- [ ] N Queens — LeetCode #51

## Graphs (13)

- [ ] Number of Islands — LeetCode #200
- [ ] Clone Graph — LeetCode #133
- [ ] Max Area of Island — LeetCode #695
- [ ] Pacific Atlantic Water Flow — LeetCode #417
- [ ] Surrounded Regions — LeetCode #130
- [ ] Rotting Oranges — LeetCode #994
- [ ] Walls And Gates — LeetCode #286
- [ ] Course Schedule — LeetCode #207
- [ ] Course Schedule II — LeetCode #210
- [ ] Redundant Connection — LeetCode #684
- [ ] Number of Connected Components In An Undirected Graph — LeetCode #323
- [ ] Graph Valid Tree — LeetCode #261
- [ ] Word Ladder — LeetCode #127

_Some Notes on This Section:_
Always opt for DFS when you have a choice in traversal problems. You can use the recursion stack to order your traversal, as opposed to having to maintain some queue for BFS. If you're given a set of (bi)directional relations (edges) between objects, you can probably solve the problem efficiently using graph traversal.

the defaultdict type from the collections library is helpful when creating adjacency lists. Pass list type to the constructor to specify adjacency list.

## Advanced Graphs (6)

- [ ] Reconstruct Itinerary — LeetCode #332
- [ ] Min Cost to Connect All Points — LeetCode #1584
- [ ] Network Delay Time — LeetCode #743
- [ ] Swim In Rising Water — LeetCode #778
- [ ] Alien Dictionary — LeetCode #269
- [ ] Cheapest Flights Within K Stops — LeetCode #787

## 1D Dynamic Programming (12)

- [ ] Climbing Stairs — LeetCode #70
- [ ] Min Cost Climbing Stairs — LeetCode #746
- [ ] House Robber — LeetCode #198
- [ ] House Robber II — LeetCode #213
- [ ] Longest Palindromic Substring — LeetCode #5
- [ ] Palindromic Substrings — LeetCode #647
- [ ] Decode Ways — LeetCode #91
- [ ] Coin Change — LeetCode #322
- [ ] Maximum Product Subarray — LeetCode #152
- [ ] Word Break — LeetCode #139
- [ ] Longest Increasing Subsequence — LeetCode #300
- [ ] Partition Equal Subset Sum — LeetCode #416

## 2D Dynamic Programming (11)

- [ ] Unique Paths — LeetCode #62
- [ ] Longest Common Subsequence — LeetCode #1143
- [ ] Best Time to Buy And Sell Stock With Cooldown — LeetCode #309
- [ ] Coin Change II — LeetCode #518
- [ ] Target Sum — LeetCode #494
- [ ] Interleaving String — LeetCode #97
- [ ] Longest Increasing Path In a Matrix — LeetCode #329
- [ ] Distinct Subsequences — LeetCode #115
- [ ] Edit Distance — LeetCode #72
- [ ] Burst Balloons — LeetCode #312
- [ ] Regular Expression Matching — LeetCode #10

## Greedy (8)

- [ ] Maximum Subarray — LeetCode #53
- [ ] Jump Game — LeetCode #55
- [ ] Jump Game II — LeetCode #45
- [ ] Gas Station — LeetCode #134
- [ ] Hand of Straights — LeetCode #846
- [ ] Merge Triplets to Form Target Triplet — LeetCode #1899
- [ ] Partition Labels — LeetCode #763
- [ ] Valid Parenthesis String — LeetCode #678

## Intervals (6)

- [ ] Insert Interval — LeetCode #57
- [ ] Merge Intervals — LeetCode #56
- [ ] Non Overlapping Intervals — LeetCode #435
- [ ] Meeting Rooms — LeetCode #252
- [ ] Meeting Rooms II — LeetCode #253
- [ ] Minimum Interval to Include Each Query — LeetCode #1851

## Math & Geometry (7)

- [ ] Rotate Image — LeetCode #48
- [ ] Spiral Matrix — LeetCode #54
- [ ] Set Matrix Zeroes — LeetCode #73
- [ ] Happy Number — LeetCode #202
- [ ] Plus One — LeetCode #66
- [ ] Multiply Strings — LeetCode #43
- [ ] Detect Squares — LeetCode #2013

## Bit Manipulation (9)

- [ ] Number of 1 Bits — LeetCode #191
- [ ] Counting Bits — LeetCode #338
- [ ] Reverse Bits — LeetCode #190
- [ ] Missing Number — LeetCode #268
- [ ] Sum of Two Integers — LeetCode #371
- [ ] Reverse Integer — LeetCode #7
- [ ] Single Number — LeetCode #136
- [ ] Single Number II — LeetCode #137
- [ ] Bitwise AND of Numbers Range — LeetCode #201
