function [normS] = computeSaltationWrap(qminus,dqminus)
name = 'amber3_PF';
normS = computeSaltation(qminus, dqminus,name);
end