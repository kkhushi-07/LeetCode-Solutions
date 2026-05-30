-- 176. Second Highest Salary
-- Goal: Find the second highest distinct salary from Employee table
-- Edge case: If there is no second highest salary, return NULL

SELECT
    -- Wrap in outer SELECT so we get NULL instead of empty result
    (
        SELECT DISTINCT Salary        -- Remove duplicate salaries
        FROM Employee
        ORDER BY Salary DESC          -- Sort salaries from highest to lowest
        LIMIT 1 OFFSET 1              -- Skip highest, take the next one
    ) AS SecondHighestSalary;         -- Name the output column as required

-- Why subquery: 
-- If table has only 1 distinct salary, OFFSET 1 returns empty
-- Outer SELECT converts empty to NULL, which LeetCode wants
