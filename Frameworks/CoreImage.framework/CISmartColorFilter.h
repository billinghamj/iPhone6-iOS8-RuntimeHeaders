/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber, CIContext;

@interface CISmartColorFilter : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputVibrancy;
    NSNumber *inputContrast;
    NSNumber *inputCast;
    NSNumber *inputUseCube;
    CIImage *_cubeImage;
    CIContext *_cubeContext;
}

@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputVibrancy;
@property(retain) NSNumber * inputContrast;
@property(retain) NSNumber * inputCast;
@property(retain) NSNumber * inputUseCube;

+ (id)customAttributes;

- (id)outputImage;
- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)inputImage;
- (void)setInputCast:(id)arg1;
- (id)inputCast;
- (void)setInputVibrancy:(id)arg1;
- (id)inputVibrancy;
- (id)_kernelCast;
- (id)_kernelCNeg;
- (id)_kernelCPos;
- (id)_kernelV_gt1;
- (id)_kernelV_lt1;
- (void)setInputUseCube:(id)arg1;
- (id)inputUseCube;
- (id)inputContrast;
- (void)setInputContrast:(id)arg1;
- (bool)_isIdentity;
- (void)setInputImage:(id)arg1;

@end
