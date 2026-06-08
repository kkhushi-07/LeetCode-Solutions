-- LeetCode 178: Rank Scores
-- Use DENSE_RANK() to handle ties without gaps
-- Fix: Use backticks for reserved keyword 'rank'

SELECT 
    score,
    DENSE_RANK() OVER(ORDER BY score DESC) AS `rank`
FROM Scores
ORDER BY score DESC;
