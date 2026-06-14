/*
LeetCode 596. Classes With at Least 5 Students
Difficulty: Easy
Topics: Database

Table: Courses
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| student     | varchar |
| class       | varchar |
+-------------+---------+
(student, class) is the primary key.

Problem:
Find all classes which have at least 5 students.
*/

SELECT class
FROM Courses
GROUP BY class
HAVING COUNT(student) >= 5;
