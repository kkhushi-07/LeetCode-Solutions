-- LeetCode 197: Rising Temperature
-- Return id of dates where temperature is higher than previous day

SELECT w1.id
FROM Weather w1
JOIN Weather w2 
ON DATEDIFF(w1.recordDate, w2.recordDate) = 1  -- w1 is exactly 1 day after w2
AND w1.temperature > w2.temperature;           -- Current temp > previous day temp
