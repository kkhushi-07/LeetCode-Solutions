-- 175. Combine Two Tables
-- Problem: Report firstName, lastName, city, and state for each person
-- If the person's address is not in Address table, report NULL for city and state

SELECT 
    p.firstName,                   -- First name from Person table
    p.lastName,                    -- Last name from Person table  
    a.city,                        -- City from Address table
    a.state                        -- State from Address table
FROM Person p                      -- 'p' is alias for Person table
LEFT JOIN Address a                -- LEFT JOIN ensures all persons are included
    ON p.personId = a.personId;    -- Join condition using personId

-- Explanation: 
-- LEFT JOIN returns all rows from Person table
-- If no matching address exists, city and state will be NULL
-- INNER JOIN would exclude persons without addresses
