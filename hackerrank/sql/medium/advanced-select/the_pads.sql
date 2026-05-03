-- Query #1
SELECT CONCAT(name, '(', LEFT(occupation, 1), ')')
FROM occupations
ORDER BY name ASC;

-- Query #2
SELECT CONCAT(
              'There are a total of ',
              COUNT(occupation),
              ' ',
              LOWER(occupation),
              's.'
       )
FROM occupations
GROUP BY occupation
ORDER BY COUNT(occupation),
       occupation ASC;
