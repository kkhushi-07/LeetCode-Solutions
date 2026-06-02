-- LeetCode 196: Delete Duplicate Emails
-- Delete rows where email is duplicate, keep only row with smallest id

DELETE p1 
FROM Person p1
JOIN Person p2 
ON p1.email = p2.email   -- Match rows with same email
AND p1.id > p2.id;       -- Delete row if its id is greater than the other row's id
