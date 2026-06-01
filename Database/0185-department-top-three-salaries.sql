-- LeetCode 185: Department Top Three Salaries
-- Find employees who earn top 3 salaries in each department

SELECT 
    d.name AS Department,  -- Department name from Department table
    e1.name AS Employee,   -- Employee name
    e1.salary AS Salary    -- Employee salary
FROM 
    Employee e1
JOIN 
    Department d ON e1.departmentId = d.id
WHERE 
    3 > (
        -- Count how many employees in same dept have higher salary
        SELECT COUNT(DISTINCT e2.salary)
        FROM Employee e2
        WHERE e2.departmentId = e1.departmentId 
        AND e2.salary > e1.salary
    )
ORDER BY 
    d.name, e1.salary DESC;  -- Sort by dept name, then salary desc
