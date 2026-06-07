-- LeetCode 610: Triangle Judgement
-- Triangle inequality: sum of any two sides > third side
-- If x+y>z AND y+z>x AND x+z>y then "Yes", else "No"

SELECT 
    x, 
    y, 
    z,
    CASE 
        WHEN x + y > z AND y + z > x AND x + z > y 
        THEN 'Yes' 
        ELSE 'No' 
    END AS triangle
FROM Triangle;
