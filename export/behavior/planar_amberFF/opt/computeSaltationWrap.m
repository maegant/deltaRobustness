function [normS] = computeSaltationWrap(qminus,dqminus)
name = 'amber3_feet';
normS = computeSaltation(qminus, dqminus,name);
end