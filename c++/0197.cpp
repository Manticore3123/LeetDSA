# Write your MySQL query statement below

select w2.id 
from Weather w1 , Weather w2
where 
datediff(w2.recorddate,w1.recorddate) = 1
and
w2.temperature > w1.temperature
