-- LeetCode 180: Consecutive Numbers
-- Find all numbers that appear at least three times consecutively
-- Key: Self join table 3 times on id+1, id+2 and check num equality

SELECT DISTINCT l1.num AS ConsecutiveNums
FROM Logs l1
JOIN Logs l2 ON l2.id = l1.id + 1
JOIN Logs l3 ON l3.id = l1.id + 2
WHERE l1.num = l2.num AND l2.num = l3.num;
