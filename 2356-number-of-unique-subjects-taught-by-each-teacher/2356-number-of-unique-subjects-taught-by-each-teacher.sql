# Write your MySQL query statement below
SELECT DISTINCT teacher_id, COUNT(distinct subject_id) AS cnt FROM Teacher GROUP BY teacher_id ;