-- LeetCode 182: Duplicate Emails
-- Report all emails that appear more than once

SELECT 
    email AS Email  -- Return only duplicate emails, column renamed to 'Email'
FROM 
    Person
GROUP BY 
    email           -- Group rows by email value
HAVING 
    COUNT(email) > 1;  -- Keep only groups where email count is > 1
