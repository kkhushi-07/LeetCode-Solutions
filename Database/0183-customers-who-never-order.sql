-- LeetCode 183: Customers Who Never Order
-- Find all customers who never placed any order

SELECT 
    c.name AS Customers  -- Return only the customer name, renamed to 'Customers' as per problem
FROM 
    Customers c          -- 'c' is alias for Customers table
LEFT JOIN 
    Orders o             -- 'o' is alias for Orders table
    ON c.id = o.customerId  -- Match customer id with order's customerId
WHERE 
    o.customerId IS NULL;  -- Keep only customers with no matching order record
