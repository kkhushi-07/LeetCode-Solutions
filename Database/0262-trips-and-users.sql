-- LeetCode 262: Trips and Users  
-- Calculate cancellation rate for unbanned users between dates
-- Key: LEFT JOIN + IF + ROUND to handle division by zero

SELECT 
    t.request_at AS Day,
    ROUND(
        IFNULL(
            SUM(IF(t.status != 'completed', 1, 0)) / COUNT(t.id), 
            0
        ), 
        2
    ) AS `Cancellation Rate`
FROM Trips t
JOIN Users u1 ON t.client_id = u1.users_id AND u1.banned = 'No'
JOIN Users u2 ON t.driver_id = u2.users_id AND u2.banned = 'No'
WHERE t.request_at BETWEEN '2013-10-01' AND '2013-10-03'
GROUP BY t.request_at
ORDER BY t.request_at;
