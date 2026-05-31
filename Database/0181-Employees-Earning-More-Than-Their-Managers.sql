-- LeetCode 181: Employees Earning More Than Their Managers
-- Task: Return the employees who earn more than their managers

SELECT 
    e.name AS Employee  -- Select employee name and rename column to 'Employee' as required by LeetCode
FROM 
    Employee e          -- 'e' is alias for employee table
JOIN 
    Employee m          -- 'm' is alias for manager table. Self-join the same table
    ON e.managerId = m.id  -- Join condition: employee's managerId matches manager's id
WHERE 
    e.salary > m.salary    -- Filter: employee salary must be greater than manager salary
    AND e.managerId IS NOT NULL;  -- Optional: exclude employees with no manager
