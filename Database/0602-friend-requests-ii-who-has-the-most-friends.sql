/*
LeetCode 602. Friend Requests II: Who Has the Most Friends
Difficulty: Medium
Topics: Database

Table: RequestAccepted
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| requester_id| int     |
| accepter_id | int     |
| accept_date | date    |
+-------------+---------+
(requester_id, accepter_id) is the primary key.

Problem:
Find the person who has the most friends and the number of friends.
The test cases are generated so that only one person has the most friends.
*/

SELECT id, COUNT(*) AS num
FROM (
    SELECT requester_id AS id FROM RequestAccepted
    UNION ALL
    SELECT accepter_id AS id FROM RequestAccepted
) AS friends
GROUP BY id
ORDER BY num DESC
LIMIT 1;
