-- LeetCode 184: Department Highest Salary
-- Find employee with highest salary in each department

SELECT d.name AS Department, e.name AS Employee, e.salary AS Salary
FROM Employee e
JOIN Department d ON e.departmentId = d.id  -- Get department name
JOIN (
    SELECT departmentId, MAX(salary) as maxSalary
    FROM Employee
    GROUP BY departmentId  -- Max salary per department
) t ON e.departmentId = t.departmentId 
AND e.salary = t.maxSalary;  -- Match only max salary employees
