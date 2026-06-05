-- LeetCode 577: Employee Bonus
-- Difficulty: Easy
-- Database: MySQL
-- Link: https://leetcode.com/problems/employee-bonus/


SELECT 
    e.name,      -- Employee name from Employee table
    b.bonus      -- Bonus amount from Bonus table, can be NULL
FROM 
    Employee e   -- 'e' is alias for Employee table
LEFT JOIN 
    Bonus b      -- 'b' is alias for Bonus table
ON 
    e.empId = b.empId  -- Join condition on employee ID
WHERE 
    b.bonus < 1000     -- Bonus less than 1000
    OR b.bonus IS NULL; -- Include employees with no bonus record
