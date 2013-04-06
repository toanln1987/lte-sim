/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2010,2011,2012,2013 TELEMATICS LAB, Politecnico di Bari
 *
 * This file is part of LTE-Sim
 *
 * LTE-Sim is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation;
 *
 * LTE-Sim is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with LTE-Sim; if not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Giuseppe Piro <g.piro@poliba.it>
 */


#ifndef MULTIPATH_V120_M12_H_
#define MULTIPATH_V120_M12_H_

static float multipath_M12_v_120[3000] = {
 9.00037, 10.1321, 11.4434, 3.06727, 8.33073, 3.52759, 7.35386, 5.90035, 4.86874, 5.90626, 2.65093, 6.24232, -5.3797, 5.8245, -1.07659, 5.3018, 2.54254, 4.20463, 4.00476, 2.31527, 4.60029, -0.929907, 4.95742, -4.58222, 4.36854, -0.156622, 4.27327, 3.52146, 0.935294, 2.24347, 2.94472, 6.06845, 2.05447, -0.122183, -4.44279, 3.82255, -7.60633, 6.46949, 6.97753, -5.83435, 6.29255, 6.87186, 5.89307, 5.59063, 2.18743, 5.76521, 8.88888, 6.11568, 6.65307, 9.35216, 5.21594, 6.68967, 8.13774, 2.41442, 5.10184, 6.10397, 2.33785, 1.53256, 5.66421, 4.98129, -0.252944, 6.84202, 4.74951, 5.69455, 8.39859, 2.31806, 7.21868, 6.04182, 6.37516, 9.19935, 3.35497, 7.60355, 6.95878, 3.58098, 6.84098, -0.782545, 7.68703, 3.63499, 7.5513, 9.18731, 5.36538, 2.84987, 4.08263, -0.358162, 1.36654, 4.9424, 3.39237, 3.10805, 7.40997, 6.45627, -2.35767, 7.22907, 7.51896, 0.710797, 6.30257, 7.42266, 1.34913, 5.74328, 6.67768, 1.7401, 0.955982, 0.741191, -5.72461, -13.2144, 0.744848, 6.11235, 6.68982, -6.10343, 7.78145, 6.63508, 5.12892, 8.53782, -0.11633, 8.5552, 7.36163, 6.87832, 10.2768, 7.01348, 5.76482, 6.97911, -12.3568, 2.34641, 2.98526, 6.25598, -1.16473, 5.6292, 5.67411, 0.956476, -3.96526, -6.88094, 5.55013, 8.00919, 3.48555, 7.88969, 9.12597, -15.9167, 9.17495, 7.98258, 2.78331, 6.13494, 2.03346, 6.77815, -5.21763, 7.12773, -1.22625, 8.64193, 7.94502, 6.38281, 10.2016, 5.40995, 8.90221, 9.73673, 0.979334, 6.86038, 3.41191, 5.33562, 6.06824, -10.8383, 4.90525, 5.52766, 4.85141, 2.29511, 2.39856, 7.2671, 6.85008, -16.8627, 6.24088, 5.88423, 0.235835, -5.14601, -21.5744, -5.8297, 0.601998, -1.21601, -0.885952, 2.03368, 2.11629, 4.3574, 5.84731, 0.72521, 6.77809, 8.32431, -5.72056, 9.15877, 8.83939, 3.65987, 9.72658, 6.60788, 7.58157, 9.44331, 4.19298, 4.67099, 1.17078, 3.58884, -3.55739, 6.69332, 7.04171, -2.98846, 6.60865, 3.29222, 3.90779, 3.64881, 3.33531, 6.56154, 1.70425, 5.56232, 7.66385, 6.13862, -5.70748, 5.48395, 7.07959, 3.89648, 5.32723, 8.67643, 7.04419, 1.16039, 6.77136, 3.00478, 3.91613, 3.92274, 1.94569, 5.35403, -7.0226, 7.03606, 6.80614, -2.02362, 6.71343, 3.81901, 5.5254, 7.97667, 4.32743, 5.01274, 7.60141, 6.05643, 0.547859, -0.97331, 3.96391, 6.15122, 5.20143, 0.236257, 7.0149, 5.42209, 3.28393, 6.16149, 0.792774, 8.62423, 7.21784, 5.30121, 8.96937, 3.90687, 7.56175, 8.13307, -1.51106, 3.73873, -1.08361, 4.81343, 1.54935, 8.44845, 6.3449, 7.22038, 10.0767, 6.18911, 7.10549, 8.13443, -4.45335, 7.68963, 5.83143, 2.70224, 6.23577, 3.11756, -3.29467, -3.62736, 0.683089, 2.9044, -2.26192, 4.09947, 7.18493, 5.95528, 3.15963, 9.02897, 8.71222, -4.6191, 7.57097, 6.40927, 2.49685, 6.94013, 3.40912, 2.6775, 3.4419, -3.29418, 4.03048, 4.21488, 2.36617, -9.70445, 4.78393, 6.67402, 2.81616, 5.96891, 8.58176, 6.48046, 0.0964542, 5.57602, 3.75328, -2.06324, -8.04862, -4.26803, 1.50714, -0.920029, 3.27988, 6.05341, 2.55804, 3.87997, 6.00252, 2.94383, -7.24845, -1.49612, 2.24964, 6.17027, 6.89696, 1.35608, 4.89247, 4.86654, -1.33245, 3.46217, -1.58167, 3.76572, 2.3174, 8.27254, 6.41789, 6.29744, 9.28572, 3.21452, 8.57538, 8.69631, 2.28592, 8.96489, 4.09083, 8.94841, 10.064, -0.134096, 9.72767, 9.95562, 1.44782, 7.72945, 7.21165, -6.54146, 5.25735, 3.07758, -9.61103, -5.79785, -12.6018, 2.02276, 4.65654, -3.24084, 6.80034, 8.56809, 5.49684, 3.45965, 6.01364, 1.38709, -1.35562, -8.79403, -1.33896, 2.63519, 6.65656, 4.7306, 2.83719, 6.02457, 0.45768, 3.01525, 0.552519, 0.0869427, -4.61627, 5.92426, 5.88113, -0.911098, 6.28431, 3.67804, 0.657695, -2.23476, 4.56352, 5.31016, -5.66645, 5.16694, 3.93853, -3.24402, -13.8238, -1.45586, 5.53888, 6.74427, -16.5966, 7.9417, 6.47599, 7.61312, 10.9039, 7.46698, 8.86194, 10.8536, 5.42486, 8.46212, 9.01392, 1.77497, 4.05383, -1.12962, 1.94291, -5.65689, 3.52392, 3.23476, -3.40763, 4.33875, 5.33067, 4.07489, -18.1432, 5.01818, 5.87778, 0.331714, 1.37315, -5.36817, 5.26565, 2.83021, 5.48427, 7.339, -5.46492, 6.95161, 4.52618, 4.65806, 4.14136, 6.30554, 8.63685, 0.166143, 7.77397, 5.50243, 6.78431, 8.29019, -5.05351, 7.85833, 5.20753, 3.44191, 3.44812, -2.19097, 2.05741, 8.36287, 6.88521, 7.57125, 10.8236, 6.40512, 9.6185, 10.8754, 3.42449, 8.77881, 8.14862, -4.51518, 4.11976, 0.164704, 5.45651, 1.80947, 1.08298, 2.61021, 2.17284, 2.95174, -2.00444, 4.79191, 6.79081, 2.03703, 3.82939, 0.608012, 5.89867, 6.9476, -3.3313, 7.22915, 4.54915, 5.27248, 6.78226, -6.75183, 6.43465, 3.65775, 4.50581, 6.60855, 2.809, -0.546033, -0.38923, -9.10493, -3.50539, 3.52126, 3.93028, -2.58389, 6.88721, 7.75089, -0.606614, 8.61866, 10.2624, 6.69169, 7.25214, 9.58843, 5.4658, 5.73499, 6.42698, -12.1838, 2.84426, 0.0449943, 5.25928, 2.30536, -8.85871, 2.00162, 5.17936, -17.9404, 7.11147, 6.08332, 5.09325, 8.36569, 0.499625, 7.96868, 6.61961, 6.23931, 9.06555, 2.96291, 7.23145, 6.25748, 3.74155, 6.67687, -22.0875, 6.67217, 5.38688, 0.995054, 6.00693, 4.66922, -4.74937, 6.13265, 8.04061, 6.45942, 1.81827, 7.96356, 7.0466, -7.01605, 3.61413, 1.79971, 3.35464, 7.34994, 7.41954, -0.505629, 8.46032, 6.27348, 6.60101, 8.83767, -1.79722, 8.44947, 7.36493, 3.69637, 7.88293, 4.75597, -0.319664, 0.985001, -3.37977, -0.715855, -13.2777, 4.60525, 4.99705, 3.39717, 8.39827, 5.16463, 7.08094, 8.26193, 0.455009, 8.65581, 5.4475, 5.57661, 4.32076, 6.33289, 7.29031, 3.87472, 9.01367, 5.11945, 6.57369, 7.06306, -0.0314824, 2.74746, 8.24462, 6.40772, 8.17157, 10.855, 4.56594, 10.1613, 10.0133, 4.52142, 10.0026, 3.85173, 8.86389, 7.84579, 4.73408, 6.96403, 3.30574, 7.69672, -3.35024, 8.75053, 6.51134, 6.45593, 8.24455, -4.50107, 8.26926, 6.69786, 2.50776, 6.48294, 2.04096, 3.96232, 6.39167, 5.24073, -4.65493, 6.87785, 7.59666, -4.1224, 8.19528, 8.77225, 2.75112, 4.0785, -2.13697, 4.64639, -0.767452, 7.09449, 8.15168, -2.43917, 7.77855, 8.02535, 2.78666, 2.33844, 4.13927, 3.73773, 0.418677, 3.33091, 6.85188, 4.05316, 5.75686, 8.42192, 4.66054, 5.2479, 6.48328, -4.75102, 4.59117, 3.44675, -1.56115, -0.573011, -0.782064, 0.275383, 3.24252, -5.19012, 5.07532, 2.90533, 3.23941, 4.42826, 2.20077, 7.41943, 6.14475, -5.48117, -0.282131, -3.92649, 3.77087, 7.61131, 6.33924, 5.15428, 9.59685, 7.7975, 3.65137, 7.72094, 2.13798, 5.34943, 3.63741, 4.40445, 6.40587, -7.33022, 6.46123, 5.37882, 4.16656, 8.64042, 7.06208, 4.27382, 9.10514, 6.79607, 6.69745, 9.95986, 6.63752, 7.15593, 9.01829, 0.770647, 7.63539, 6.79941, -1.91944, 2.27944, 3.52478, 5.74057, -12.064, 4.64531, -7.89454, 4.60034, -2.34961, 8.24868, 7.27452, 6.10158, 10.1136, 7.5423, 4.66016, 6.8898, -0.830544, -4.05612, 4.98102, 5.79029, 2.9838, 8.06834, 3.15639, 7.65266, 8.15736, -5.50354, 6.55688, 0.287408, 5.20057, 1.95383, 4.23338, 2.37073, 5.14153, 6.51914, -11.2168, 5.02751, 0.101815, 3.17821, 1.45715, -11.0566, 4.39589, 7.54737, 1.86704, 8.66128, 9.73768, -5.32647, 9.5735, 8.14512, 6.14246, 9.0415, -5.66594, 9.87517, 9.08208, 3.7995, 9.84242, 8.68227, -2.58683, 5.51372, 5.33696, 1.93765, -4.80795, 2.87013, 4.13795, 2.86821, -0.42846, -7.06073, -0.315191, 3.86213, 2.83575, 2.71064, 7.26895, 5.63244, 2.62672, 6.23501, -4.66672, 6.28734, 5.1534, 0.573839, 2.84421, 2.5208, 4.9745, 1.95006, 8.07873, 6.22403, 4.61529, 7.92947, 4.73077, -1.18643, -8.93869, 1.9723, -2.00327, 6.57032, 6.03387, -0.932819, 4.55472, 0.614011, 6.99017, 2.29803, 7.55296, 8.57815, -2.26496, 9.71826, 9.576, -21.1959, 9.04716, 8.65214, -9.60596, 8.06685, 8.14698, 3.08097, 3.37857, 4.66695, -1.241, 2.23283, 3.47427, -0.339047, -2.23809, -0.194791, -4.05821, -5.49974, 0.967503, 3.02587, -2.3901, 4.73305, 7.42037, 5.74926, 1.93692, 7.39084, 6.3178, -6.06469, 0.288756, 2.04023, 5.11726, -10.2988, 6.75458, 5.80739, 3.95742, 7.79123, 2.80498, 5.86554, 4.06085, 6.41903, 8.20087, -5.55572, 8.83634, 7.28319, 6.23488, 9.70212, 6.82827, 3.87683, 6.38283, 2.82437, -1.44808, 0.0516922, 0.480647, 6.75477, 5.55944, 5.4764, 9.2101, 5.34415, 8.15224, 9.9229, 4.52622, 7.50768, 8.05973, 0.484763, 2.49207, -0.013738, 6.44678, 4.91985, 2.6183, 7.09594, 5.71186, -1.03007, 6.52184, 6.47495, -0.175388, 3.63934, 2.36384, 2.81301, 5.55496, -2.99534, 5.47753, 4.2456, 4.25816, 7.5833, 4.27687, 3.48789, 4.65527, -10.8469, -1.64016, 3.02861, 4.97328, -1.88894, 7.17171, 6.38765, 1.49729, 7.31897, 5.28081, 2.74766, 6.98875, 5.6916, -1.21836, 7.67959, 9.22403, 7.2693, 3.39608, 8.94113, 7.7185, 1.16626, 7.45859, 4.54809, 2.47668, 1.83848, 4.36377, 6.48039, 0.178002, 4.53997, 4.02549, -3.21434, 2.64288, 0.214082, -0.128206, 3.19669, 1.85938, 1.92726, 5.5098, 1.70421, 2.8462, 2.23149, 2.91114, 4.9782, 0.685681, 7.85234, 6.63154, 4.477, 8.89242, 6.24901, 5.54854, 7.8605, -6.17852, 8.37262, 8.39065, -2.15506, 5.91877, 3.71179, -2.41765, -0.259127, 6.35331, 2.91196, 8.13709, 10.4947, 6.60371, 8.49064, 10.0905, 1.71822, 8.96663, 8.35614, 1.86518, 7.50781, 0.994767, 6.25134, 5.49319, 0.602592, 5.44678, 3.63981, -0.414673, -6.06917, 2.18762, 6.01277, 4.53726, 2.76814, 6.43936, 0.727796, 4.52138, 0.1025, 6.58146, 7.49413, -11.4963, 6.51394, 2.67477, 5.69479, 6.11863, -0.396916, 6.30526, 4.03436, -2.94824, 1.87914, 4.2998, 7.46069, 7.74609, -10.95, 8.85599, 8.90627, -4.84238, 8.50728, 7.36416, -4.01759, 3.87237, -4.39702, -12.3894, 4.04016, 4.9496, -1.82756, 5.96024, 3.16892, 3.16109, 3.9511, 0.13641, 4.98476, 0.168471, 4.14834, 6.48731, 6.18332, 3.25291, 2.10616, 6.61617, 3.91972, 5.99653, 8.26091, -3.65038, 8.9247, 8.02755, 6.28644, 10.0894, 5.37889, 7.88285, 6.54103, 7.68416, 9.59354, -0.52526, 10.472, 9.02274, 6.09804, 9.8831, 6.3625, 3.7195, 4.19947, -0.859994, 4.63304, 7.13432, -0.66272, 8.32089, 8.78488, -3.59592, 8.4926, 6.48897, 3.51671, 5.1005, 2.77886, 7.08715, 4.10269, -0.229632, -0.686956, -2.29608, -2.90732, 4.15277, 1.77654, 3.46511, 5.74827, 1.17654, 1.63302, 0.251581, 1.42753, 4.57456, 4.07631, 0.850518, 0.298301, 5.79641, 6.42538, -0.160899, 5.81233, 6.89241, 1.22556, 3.63947, 3.35255, -28.1416, -12.3844, 3.50781, 4.96363, -6.13485, 6.27512, 7.75267, 4.04136, 6.38616, 9.77686, 8.84462, -0.950474, 9.04313, 7.69441, 5.51123, 9.4426, 4.63357, 8.28593, 8.82507, 0.339229, 8.83194, 6.34558, 3.76022, 3.63215, 4.94986, 6.24452, 1.23683, 6.83716, -1.9346, 6.635, 3.4434, 6.87797, 7.87421, -0.871196, 8.34625, 6.69173, 1.90634, 5.92672, 3.07577, 0.282273, 3.05572, -0.515745, 4.82413, 6.73751, 0.643184, 5.59139, 6.62485, 4.29962, 2.67549, 3.19322, -4.46253, 4.75778, 5.97565, 1.16963, 1.76682, 3.11082, 3.0717, 4.10224, 0.721767, 4.42936, 5.8562, 3.18431, 9.44472, 7.67999, 7.51144, 10.6853, 5.8909, 9.05294, 9.40696, 2.27063, 9.2815, 5.32243, 7.00845, 7.45157, -6.02989, 5.19386, 2.30621, 0.582367, 4.78628, 2.72417, 5.46583, 7.66437, -3.58562, 7.86428, 7.38363, -3.87628, -6.60931, 5.3252, 3.39761, 7.54949, 9.67903, 1.09559, 9.51303, 8.90207, 3.56221, 7.73372, 2.25359, 8.93162, 3.16425, 8.56486, 7.47981, 6.81619, 9.18834, -0.909059, 9.84593, 7.7815, 6.39355, 8.69527, 1.07696, 5.30761, 0.540102, 1.843, 0.742208, 6.38988, 1.09816, 6.31385, 5.2157, 5.89494, 8.53118, 0.590765, 8.01838, 7.16379, 5.41185, 9.79109, 8.2321, 1.85401, 8.7461, 8.64535, 3.35355, 5.9676, 8.13708, 5.81742, -2.20857, 1.3892, 2.10421, 4.24775, 1.42593, 7.30338, 4.52587, 5.73536, 7.30998, -2.23415, 7.92825, 5.95004, 4.43247, 6.98189, 0.0710515, 3.87489, 0.543208, 0.412086, -3.93754, 5.50226, 5.12985, -3.79147, 4.33547, 1.44748, 0.00474572, 3.22377, 3.95029, 4.10377, -0.253694, 3.08362, 4.08712, 0.229924, 6.03534, -0.847718, 7.52801, 8.06416, 1.88813, 9.97312, 9.73245, 0.108977, 7.83175, 8.08227, 4.48452, -6.42637, 2.76952, 4.58049, 3.00605, 1.12706, 5.88508, 3.51365, 2.94758, 5.51127, -1.02437, 3.77891, 3.4069, -14.7984, -2.77801, 1.50503, 4.87432, 3.53602, -3.33743, 4.55612, 4.24679, -0.427493, 7.2766, 7.5735, -5.99039, 7.51557, 6.7732, 2.78636, 7.13431, -5.05893, 7.25144, 3.61338, 8.02285, 9.29355, -1.8063, 7.9895, 4.86976, 5.84534, 2.99838, 8.57963, 9.70107, 1.84266, 10.9539, 9.53684, 6.66059, 10.6056, 6.92524, 6.56744, 7.57843, -1.20705, 3.24111, 2.4606, 4.29985, 6.51778, 3.21605, 5.74443, 7.18613, -1.663, 7.88579, 5.45468, 4.72268, 5.37722, 3.83607, 7.01801, -5.4248, 7.83888, 6.06155, 4.6517, 7.61622, 4.2682, -8.21007, -1.83886, 0.554102, 2.40587, 6.23014, 3.34099, 0.93694, -3.90883, 4.89799, 3.60903, 5.79916, 8.65723, 4.07278, 7.40112, 8.78873, 3.87647, 4.2314, 4.16982, -25.9438, -0.351187, -2.20034, 2.45073, 5.64531, 4.69992, -0.304901, 6.33885, 5.69338, -3.58815, 6.81549, 7.71206, 3.38867, 6.25692, 8.77722, 5.2655, 7.07181, 9.37529, 4.79805, 6.78213, 6.67777, 4.37819, 8.05203, -13.3572, 9.4806, 9.28213, -0.389012, 8.87147, 6.70378, 3.56434, 5.53623, -0.451058, 5.17619, -6.93647, 6.66397, 6.41976, -1.15062, 0.89269, -2.7906, -8.51098, 0.34001, -2.72951, 4.52793, 7.24383, 4.13098, 5.51748, 8.11615, 4.06008, 6.20337, 8.19879, 4.37801, 4.30844, 6.32094, 2.39141, 0.845517, 3.38211, 3.56854, 4.483, 3.57354, 0.957684, 7.63412, 8.13245, 2.53024, 5.62339, 6.22394, -5.13611, 3.67682, -2.72242, 4.04147, 3.51729, 1.2159, 6.3312, 6.40258, 3.95134, -20.3581, 3.94431, 5.2841, -1.71821, 5.93465, 6.89299, -11.843, 6.67319, 3.59604, 6.54491, 7.55039, 2.91085, 9.29967, 5.82078, 8.72427, 10.3255, 1.05808, 9.65683, 8.99814, 3.80678, 9.23495, 6.20501, 4.46812, 6.38802, 3.40274, 3.44772, 5.90734, 2.53459, 6.34835, 8.74598, 5.23151, 5.50897, 7.62483, 4.16549, -2.69082, -9.18315, 2.69913, 3.413, -1.16999, -1.85349, 1.10075, 1.10863, -3.97995, 1.36551, 4.24276, 3.18901, -7.31737, 1.3577, 2.74401, 1.94702, -9.1056, 3.87677, 5.96929, 2.68387, 3.79122, 5.66851, -13.6188, 5.5537, 2.07662, 5.74668, 6.81004, -2.73669, 6.75469, -0.0235673, 8.10531, 8.56547, 1.41061, 9.94374, 9.31759, 0.346852, 9.59951, 9.587, 5.25855, 3.12712, 5.89569, 3.91857, -3.51113, 4.07368, 2.83226, -0.791642, 3.57704, -6.69023, 4.66415, 4.68268, -5.25335, 4.01896, 0.586402, 0.796663, -0.291051, -0.462003, -4.09887, 4.3503, 5.8353, -16.7849, 7.138, 7.36459, -6.06086, 6.3546, 4.66538, 3.86893, 7.12597, 3.45915, 3.89859, 5.26129, -4.3586, 2.33762, -9.68698, 2.86412, -7.08989, 7.30027, 8.67743, 4.83471, 5.0809, 7.1409, 4.27188, -3.32724, -6.62522, 1.40585, 7.21654, 7.73533, -1.88093, 9.19171, 8.20466, 6.05194, 10.2105, 5.76273, 8.94436, 9.53975, 2.69485, 10.094, 7.2505, 7.65821, 9.58211, 3.70262, 5.75218, 3.47035, 2.94513, 2.30123, 1.7074, 1.92883, 1.89134, 3.91092, -4.42164, 3.69474, -3.36058, 3.78197, 4.6942, 4.15162, 5.26447, 4.53415, 2.26833, 8.19828, 7.33799, 1.08656, 7.33281, 4.35927, 0.434535, -4.88384, 5.89678, 2.86469, 6.85251, 8.54719, -1.64858, 8.42641, 8.16397, -3.29956, 7.17001, 5.75948, -4.37808, -0.898419, -2.01221, -2.50568, -0.861025, 5.66398, 5.88565, 0.685273, 8.05381, 6.60524, 4.74107, 8.59808, 5.54424, 3.6064, 4.86939, -2.31161, 4.96048, 4.74829, 4.03998, 2.08183, 3.51897, 8.3408, 7.43639, 3.57339, 8.89782, 6.17698, 4.28812, 3.87028, 5.65116, 6.31669, 6.08816, 9.92617, 4.79993, 9.43136, 9.95318, 0.47157, 9.72072, 6.99437, 5.56006, 5.30109, 6.05956, 7.83807, 0.589337, 8.54989, 4.96594, 7.1753, 8.06913, -2.57954, 7.63841, 4.46106, 6.09201, 8.371, 5.94837, -1.92866, 5.03769, 4.63454, -4.19237, 4.22518, 4.86667, -2.354, 6.91777, 6.56943, 0.887255, 8.34215, 8.33506, 2.25416, 5.78224, 7.7174, 6.33286, -3.52772, 5.13728, 6.16149, 1.55199, 2.99122, 4.22175, 0.0794205, -1.36138, 4.27923, 5.07184, -8.3555, 6.14709, 5.80213, -4.84983, 5.16237, 4.26936, 0.124559, -1.79814, -3.59462, -2.80812, -15.8126, 4.70602, 6.44497, -3.17211, 7.16075, 7.10752, -0.476969, 6.53877, -0.471822, 5.53238, 0.371084, 6.99774, 6.91398, 3.06135, 7.33312, -8.31491, 7.56622, 0.303724, 9.39164, 9.60455, 4.15508, 10.9266, 8.91933, 7.40755, 10.8467, 8.26767, 3.4261, 7.35299, 5.0918, -2.92178, -0.455994, 2.5188, 2.52987, -2.06715, -4.39386, 3.7366, 5.6169, -0.57104, 5.14642, 4.64799, 2.56672, 5.9465, -15.2587, 6.49209, 4.88279, 1.91801, 4.27556, -4.89983, -3.62585, 5.61923, 5.16702, 4.66313, 8.43155, 3.37447, 7.05333, 5.69674, 6.81711, 8.80857, -4.45107, 9.06115, 6.5896, 6.85073, 8.53567, 0.519972, 3.62637, 1.5708, 5.5725, 3.86394, 9.41641, 6.23435, 8.76498, 10.7862, 6.34478, 6.77538, 7.13814, -4.01493, 0.671702, -4.56836, -3.10474, 4.25107, -5.50762, 7.11602, 6.60004, 5.74896, 9.44422, 3.82618, 8.40033, 7.34276, 6.95175, 9.19252, 2.54313, 10.7584, 8.87809, 7.26881, 10.001, 1.63922, 8.6679, 7.2069, 4.10279, 6.42414, 0.171852, 6.96035, 4.30246, 0.770644, 2.45834, -2.20673, -0.0702861, 1.71829, 0.420208, 7.30654, 8.08744, 4.0449, 4.61001, 7.60802, 6.94688, 1.60933, 4.55869, 7.01655, 4.5186, 2.72341, 5.96777, 0.803728, 4.1239, 4.66739, -1.5404, -4.58387, -7.10208, 2.93192, 7.02472, 6.34902, 1.70421, 7.52779, 3.57923, 6.39851, 6.89341, 1.88305, 7.34049, -3.19447, 8.39569, 8.14999, 1.51022, 8.38179, 5.78494, 4.66352, 7.21347, 3.63781, -0.900804, -1.27805, 0.976086, 4.12648, 2.58527, 1.67972, 7.59627, 8.29258, 1.28892, 8.33214, 9.69302, 4.71705, 7.27083, 8.24055, 0.305217, 5.58093, 4.20888, -1.32785, 2.62696, 1.11269, 3.32031, 5.56234, 3.3695, 3.12602, 6.64974, 4.24444, 1.97552, 6.13213, 5.64391, 1.6386, 0.294463, 3.73831, -0.0843144, 3.11788, 4.63032, -8.96896, 4.69496, -2.11895, 6.7709, 7.57033, -11.1352, 7.23391, 6.15403, -5.79157, -1.30902, 3.33483, 1.64634, 5.96566, 8.01807, 0.98384, 6.45602, 4.33455, 3.88298, 0.230213, 7.8743, 8.49419, 4.2542, 10.1948, 5.67875, 10.18, 11.1186, -2.37256, 11.1906, 9.70214, 6.65535, 10.4274, 6.78697, 4.59233, 4.29037, 0.365747, -1.4508, 3.66972, 1.83517, 4.66352, 6.56024, 0.852531, 2.49911, -0.71172, -1.63399, -0.553581, 4.94475, 2.91981, 0.174008, 1.29439, -3.35263, -3.00706, 6.46241, 6.93145, 0.795104, 8.82177, 8.10597, -3.54436, 6.09203, -0.812083, 5.0606, 3.07475, 2.73842, 3.56847, 1.25584, 5.61697, 2.22884, 2.26929, 4.08761, -0.993895, 2.16976, 5.65301, 6.46722, 3.56497, 4.23847, 7.91348, 5.94006, 4.41686, 8.67448, 7.40488, -2.70767, 7.18723, 7.55047, 4.41482, 0.989585, 5.88873, 4.77919, -1.17739, 4.85872, -5.41288, 6.66193, 6.58897, 3.67599, 9.36859, 8.25829, 0.318896, 7.0305, 1.26435, 5.23927, 2.51423, 5.15623, 5.3803, 4.25303, 8.3884, 4.65822, 6.60845, 7.71473, -1.41149, 8.41411, 7.242, 1.56143, 6.66336, 0.974628, 4.76689, 3.02216, 3.84786, 5.28536, 1.46965, 7.72733, 5.47302, 6.22878, 9.43107, 6.96758, 4.98752, 8.7935, 7.32786, -3.03587, 4.41599, 5.8248, 5.71342, 3.38735, -1.85507, 2.72834, -0.599555, 6.56319, 5.10592, 5.03431, 8.59996, 4.85542, 7.08401, 8.92528, 4.17356, 5.16389, 5.2162, -3.77173, 3.18855, -0.493348, -2.4798, 2.75082, 1.64409, 2.12229, 5.11189, -1.56397, 3.69628, 1.35784, 1.93822, 0.286449, 3.52744, 2.95205, 5.48504, 8.29635, 1.50848, 8.54027, 9.12254, -4.71073, 8.06188, 6.90744, -7.16106, -2.02514, 6.86184, 6.29044, 4.8823, 9.17248, 5.91649, 7.07349, 8.88546, 1.17832, 7.46637, 6.50655, 4.61566, 8.90047, 6.90084, 3.8313, 8.32629, 6.27484, 4.05823, 8.37876, 6.51901, 3.36316, 7.93801, 5.87913, 1.70162, 5.75975, 2.19007, -0.3178, 0.538611, -2.1654, 1.62503, 3.0086, -5.51001, 5.50268, 5.20487, -0.953331, 5.99721, 4.97705, 1.34995, 3.92356, 6.306, 1.981, 6.93605, 8.97152, 4.6037, 6.88699, 8.45081, 3.88805, 3.12544, 2.00369, 1.30939, 2.78791, -8.99555, 0.569811, -7.31546, 1.09334, -9.30357, 2.2615, 1.28465, -0.00518765, 3.88354, -0.0733138, 3.40539, 5.97118, 3.57632, 2.57849, 6.76369, 5.27396, 2.39213, 7.73914, 6.77613, 0.852657, 7.90014, 6.67227, 4.15898, 9.51743, 9.14712, -0.149537, 7.70042, 7.86287, -1.03466, 4.87513, 0.424721, 4.37774, 1.3307, 7.1817, 9.33714, 4.57747, 7.9264, 8.9299, -4.20404, 7.88738, 5.862, 4.20252, 5.71059, -0.144206, 4.75361, 0.526526, 6.35399, -2.54381, 6.78163, 4.33857, 6.68446, 7.98945, 0.948472, 8.85065, 5.60642, 7.3989, 8.70039, -1.99312, 6.33021, -0.0303808, 6.18986, 5.05848, 0.277437, -0.95528, 5.19689, 4.53552, 6.32574, 9.53279, 5.51599, 8.34105, 10.3527, 7.34417, 3.37061, 7.03942, 5.48515, 0.0531227, 0.50781, 3.57927, 0.129192, 2.68414, 3.49099, 1.80795, 6.21216, -4.38248, 7.86856, 7.70148, 3.63027, 9.10317, 5.42343, 7.56588, 8.70808, -8.43411, 7.61023, 4.80862, 5.44596, 7.34944, 3.75434, -9.39099, -11.4337, -5.87802, 1.31944, -2.1278, 2.90596, 3.04105, 2.66352, 6.41421, 0.29442, 6.52834, 7.51937, 3.84335, -4.4207, -1.96341, 1.62926, 8.19441, 8.72392, -3.38317, 9.70336, 9.03313, 3.33063, 9.18946, 5.85854, 4.93184, 4.52924, 3.19386, 3.95991, 3.32653, 5.36171, 1.99149, 7.13216, 1.56193, 5.63118, 1.52831, 7.30992, 7.87536, 0.849264, 7.95336, 1.40061, 8.09937, 7.45386, 5.60095, 9.52582, 5.146, 8.00371, 9.2348, 2.3039, 6.7197, 5.52374, 4.26814, 7.90293, 4.30504, 6.58855, 9.35338, 7.34902, 3.44232, 8.60663, 7.44176, -19.595, 5.42569, 4.92483, 3.03341, 3.35236, 1.11861, 3.53806, 6.98146, 3.86477, 5.55186, 8.03371, 4.97754, 1.27715, 2.87375, -4.12859, 2.02227, 0.179836, -0.551998, -0.307029, -0.606961, 5.12894, 3.21975, 3.94571, 6.49676, -1.86793, 5.21786, -1.3728, 7.3127, 7.52559, 2.12409, 8.61198, 6.32656, 3.07294, 4.18794, 2.62788, 4.76783, 1.62208, 6.58831, 2.36849, 3.40946, 2.24957, -10.9827, 4.08044, 7.98115, 4.25699, 8.47398, 10.1563, -1.39176, 10.6209, 10.7237, -2.57826, 9.07399, 7.34971, 3.15339, 6.33022, -0.724804, 2.31863, -1.14423, -3.31207, -12.8279, -7.91254, -0.487308, 1.99737, 1.10247, 1.92028, 3.10299, -9.18213, 6.49287, 7.26868, -7.48282, 6.51872, 1.74794, 7.0378, 6.34532, 6.64502, 9.6949, 2.29567, 9.53532, 9.31206, 1.96118, 8.12035, -10.3469, 8.12675, 4.14867, 7.54926, 7.26634, 5.56862, 9.36301, 6.03802, 3.18894, 3.14828, -7.0553, 4.62208, 7.64204, -1.66786, 9.41002, 9.69935, 2.11048, 10.1529, 7.21913, 8.14989, 9.79875, 1.41818, 7.74514, 6.68536, -3.64792, -2.35188, 3.96334, -6.26198, 5.84113, 4.62104, 3.15256, 4.77335, 2.58825, 6.10346, 1.44724, 8.7416, 7.0406, 4.46087, 7.06134, -2.61644, 6.66908, -0.549895, 6.22196, 1.86788, 7.82636, 8.87525, -5.16416, 8.5259, 7.84047, -2.87612, 5.9457, 2.2116, -0.19721, -3.60071, 5.59983, 5.7347, -4.52557, 6.91835, 7.21621, -4.35186, 7.32553, 7.39947, 2.32334, 9.65814, 9.06499, 2.57744, 9.95523, 8.72955, 2.45948, 8.381, 5.96753, -2.28921, -2.68828, 2.741, 1.90723, -1.27872, -2.71808, 2.74574, 2.06016, 3.05424, 4.87743, 2.41849, 8.24255, 6.42342, 4.88827, 8.27239, 4.63234, 3.63328, 4.2516, -11.8625, -8.78633, 4.87323, 5.91723, -3.42977, 5.61852, 6.4304, 3.36419, -5.21942, 2.10987, 2.07776, -15.4332, 3.9099, 4.76533, -4.95369, 4.43915, 4.30342, -7.63285, 0.285067, -2.47984, 2.49363, 7.26246, 7.81117, -5.65298, 8.40269, 8.39481, -0.441318, 8.81112, 7.80949, -1.23787, 6.69964, 4.36086, 1.41555, 5.27446, 3.24831, 1.46244, 6.80599, 6.21524, 3.19717, 9.43346, 8.80277, 2.5408, 9.58372, 7.76611, 3.54027, 5.98683, 3.26813, 7.28454, -5.37017, 8.14405, 5.25476, 7.09841, 8.09115, 1.19814, 8.12416, 2.0042, 7.49909, 6.68799, 1.34701, 1.67639, 6.86971, 7.93395, 3.77603, 10.0276, 7.32558, 7.97652, 10.0083, 3.61358, 7.15043, 5.3667, 2.75239, 1.08297, 5.39457, 5.01668, 5.15004, 8.28581, 2.79136, 6.56936, 5.84638, 3.39337, 6.42244, -1.95313, 8.22493, 8.29558, 1.22412, 6.42816, 8.08444, 5.97188, 2.04236, 8.05228, 7.5958, -3.2052, 7.57014, 5.41758, 5.91535, 8.73588, 5.00264, 4.67401, 5.0255, 1.15715, 4.88353, -1.82652, 6.46885, 4.19928, 4.71522, 7.80016, 5.66934, 0.886217, 6.57174, 6.51778, 2.04235, 3.66328, 6.70498, 5.58172, -6.62081, 3.5549, 3.5986, 1.92813, 2.65675, 3.22672, -1.70327, 0.704755, -0.886836, 0.481683, -0.414454, 3.71172, 6.23502, -1.9149, 7.36899, 8.56261, 3.93338, 4.99834, 5.7895, -11.7206, 4.71119, 4.478, 1.17194, -6.33036, 0.970817, 5.40909, 5.70622, -4.26384, 7.73579, 8.25773, -1.52948, 7.85098, 7.95529, -8.70019, 7.15687, 4.86839, 4.19621, 5.42745, 3.42812, 8.03737, 1.79007, 9.19713, 10.5156, 4.26714, 9.0874, 9.50242, -14.282, 8.2737, 5.67622, 5.23663, 6.28837, 2.01095, 7.6751, 5.76102, -6.90036, -2.58745, 0.391756, -12.0995, 4.42533, 3.5053, 3.35194, 6.55428, 0.750825, 5.48451, 5.59763, -6.20527, 4.40407, 3.43216, 1.78151, 2.02754, -3.11095, 6.94515, 7.8186, -14.3819, 8.79658, 8.59024, 0.912101, 8.99828, 7.77228, -15.5573, 2.50127, -0.20799, 2.13261, 2.95431, 6.60109, 3.05869, 3.78186, 5.45137, 2.95845, 2.69493, 4.91477, 2.50615, 3.56666, 5.67945, -4.5378, 6.71899, 4.38204, 5.73019, 7.9401, -0.836878, 7.92581, 8.04312, -3.11786, 8.06903, 6.94501, 2.81469, 8.2458, 6.51222, 3.6597, 8.37129, 6.77066, 1.83382, 7.1866, 4.62062, 2.82998, 5.53202, 2.43983, 0.252281, 5.04973, 5.51534, 2.279, 9.06044, 8.49855, 2.84047, 9.75599, 8.72599, -3.70207, 6.11565, -4.96976, 6.02484, 3.66136, 4.58552, 6.54869, -0.46467, 4.64156, 4.24645, -9.65285, 1.77581, -1.92356, -2.62265, -0.485695, -0.401779, -1.18263, -5.69501, 2.70458, 3.27467, -10.2648, 3.47758, 2.54064, 2.00864, 6.44706, 4.99112, 1.54125, 6.47712, 2.92428, 6.1635, 8.6444, 5.26809, 6.48751, 9.23533, 6.60029, 4.82764, 8.82637, 8.26835, 4.71341, -3.46557, 4.22146, 5.37107, 3.45731, -4.72187, 2.12033, -2.88603, -2.24651, -2.11989, 3.34631, -1.9737, 3.98117, 3.12593, 3.83981, 6.3164, -2.24717, 7.84802, 5.61668, 6.29908, 7.84911, 2.85323, 9.46546, 6.14832, 7.92802, 8.60635, 4.84113, 10.1065, 5.96699, 8.49623, 8.78036, 3.90908, 9.21696, 3.69587, 7.90746, 7.13537, 5.36998, 9.26407, 7.39157, -4.0602, 3.11811, 5.79966, 7.99217, 7.2719, 2.29974, 9.35423, 8.54055, 0.91111, 8.18128, 5.65347, 3.11889, 5.31786, -1.6713, 1.1624, 0.770472, 0.578669, 1.51954, -5.43978, 1.24618, -4.68912, 4.22422, 4.67698, -1.66342, 4.55562, -4.90261, 6.34886, 3.93708, 4.97113, 6.12423, 1.60217, 7.22985, 1.96753, 5.81811, 3.03903, 7.06002, 8.61196, 0.656406, 7.03761, 6.14549, -5.64574, -3.10727, 4.69268, 4.83731, 3.18451, 8.04424, 7.00298, -4.05739, 4.95445, 6.92367, 7.23488, 3.0163, 6.91639, 9.30563, 3.61272, 9.31763, 10.355, -0.509966, 9.57943, 8.16398, 6.3016, 9.3959, 3.06537, 7.15827, 5.32997, 4.6621, 5.79934, 0.121693, 4.82776, 0.187528, 6.6888, 3.7534, 2.54026, 0.816674, 4.52062, 5.20982, 1.90408, 7.55723, 6.09985, -1.81234, 4.38739, 1.10062, -7.16522, 2.3359, 5.35464, 2.95292, 3.86114, 7.78918, 7.20533, -3.37666, 6.182, 6.31194, -7.15214, 5.21199, 4.49622, -2.23996, -0.440885, 4.51035, 1.00433, 6.19985, 7.89162, -4.44502, 9.45573, 9.01736, 3.89049, 9.8949, 6.65825, 8.07216, 9.9614, 4.78078, 6.56489, 6.74907, -3.04604, 1.629, -5.46644, -1.248, 0.443376, 3.33503, 3.12852, 3.0072, 8.35665, 7.35928, 3.78752, 8.78891, 5.9991, 3.49022, 2.25955, 5.90724, 6.34475, 4.48645, 8.70354, 3.0042, 8.27231, 8.68813, -3.85358, 5.8539, 0.452777, 2.35282, -1.11619, 5.38987, -6.43561, 8.08381, 7.78117, 1.09817, 7.70536, 3.79689, 5.36716, 6.22194, -0.375518, -0.276902, -0.165913, 4.04475, 6.75585, 4.42572, 5.02366, 7.99185, 4.44162, 3.69646, 4.35047, -4.31386, 1.37209, -1.96256, 3.22638, 3.49273, 5.22925, 6.05952, -6.84443, 8.754, 9.0429, 3.45844, 10.8083, 9.19163, 6.80783, 9.92606, -2.18615, 9.37735, 6.18493, 8.43295, 8.6036, 6.81124, 10.8671, 6.4983, 8.80372, 9.16739, -0.164046, 7.71301, 1.68804, 5.04686, 1.14276, 1.95841, 0.871393, 7.09079, 2.69311, 7.78115, 8.943, -0.0393635, 7.32119, 6.37447, -3.48942, -0.88924, 5.33031, 2.46654, 4.69344, 5.07561, 2.95933, 6.47819, -3.63798, 7.462, 3.74258, 7.78413, 9.31606, 2.72283, 7.50423, 7.70695, -0.569689, 4.44356, 5.2122, 5.25832, 4.97876, -3.93697, 5.81646, 6.72924, -1.10968, 4.84152, 2.95143, 2.92704, 4.8715, -11.6922, 4.29133, 2.187, 1.51748, 3.74323, -7.10696, 5.53348, 5.70244, 0.21721, 8.7946, 9.71063, 4.69389, 8.1017, 9.54055, 2.39297, 8.17937, 7.76359, 2.14996, 7.13906, -8.02922, 7.99967, 6.37765, 4.26367, 6.70316, -5.12248, 5.92028, -1.5054, 5.40916, -0.380807, 7.5071, 8.11211, -0.163209, 9.17438, 8.67353, -4.80095, 6.89351, 6.59564, 1.06416, 1.93409, 4.53512, 3.39821, -3.06532, 4.94692, 3.99792, 1.0524, 6.20463, 5.34258, 0.66689, -1.37161, 1.74638, -2.89761, 3.36014, 5.24914, 2.18411, -0.781965, 3.85675, 5.75909, 6.54978, 3.17157, 5.43741, 8.08627, 2.90724, 7.46737, 8.27331, -6.31188, 7.83983, 4.94666, 6.21829, 7.58559, -5.68501, 7.7171, 7.23361, 0.731463, 1.62501, 4.12537, 5.92167, 5.3784, -0.0475155
 };


 #endif /* MULTIPATH_V120_M12_H_ */
 