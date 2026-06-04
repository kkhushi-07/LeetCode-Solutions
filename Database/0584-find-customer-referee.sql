-- LeetCode 584: Find Customer Referee
-- Table: Customer with columns id, name, referee_id
-- Goal: Find names of customers NOT referred by customer id = 2

SELECT name 
FROM Customer
WHERE referee_id IS NULL  -- Customer was not referred by anyone
   OR referee_id <> 2;    -- Customer was referred, but not by id=2
                          -- <> means 'not equal to' in SQL
