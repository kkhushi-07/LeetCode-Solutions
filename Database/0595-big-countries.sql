-- LeetCode 595: Big Countries
-- Return countries with area >= 3M OR population >= 25M

SELECT name, population, area
FROM World
WHERE area >= 3000000  -- Area at least 3 million km^2
   OR population >= 25000000;  -- Population at least 25 million
