/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIColorControls : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputSaturation;
    NSNumber *inputBrightness;
    NSNumber *inputContrast;
}

@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputSaturation;
@property(retain) NSNumber * inputBrightness;
@property(retain) NSNumber * inputContrast;

+ (id)customAttributes;

- (id)outputImage;
- (void)setDefaults;
- (id)inputImage;
- (id)inputContrast;
- (id)inputBrightness;
- (id)inputSaturation;
- (void)setInputBrightness:(id)arg1;
- (void)setInputContrast:(id)arg1;
- (void)setInputSaturation:(id)arg1;
- (void)setInputImage:(id)arg1;

@end