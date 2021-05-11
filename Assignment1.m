#By Doing Light Contrast Enhancement using HISTOGRAM

%READ THE INPUT IMAGE
I = imread('Lab1.png');

a = 1.58;
b = 0;

y =  a*double(I) + b;
y =  uint8(y);

%HISTOGRAM OF THE INPUT AND OUTPUT IMAGE
hist_I=imhist(I);
hist_y=imhist(y);

figure,stem([0:255],hist_I);hold on; stem([0:255],hist_y);
legend Original Enhanced figure,subplot(1,2,1),imshow(I);
title('Original Image');
subplot(1,2,2);
imshow(y);
title('After LCE Enhacement');