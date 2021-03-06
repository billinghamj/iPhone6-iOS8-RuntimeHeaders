/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReferencingDelegateStorage, NSDictionary;

@interface AVCaptureVideoDataOutputInternal_FigRecorder : NSObject  {
    AVWeakReferencingDelegateStorage *delegateStorage;
    booldelegateRespondsToDidOutputSBufCallback;
    booldelegateRespondsToDidDropSBufCallback;
    NSDictionary *videoSettings;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } deprecatedMinFrameDuration;
    boolalwaysDiscardsLateVideoFrames;
}


- (id)init;
- (void)dealloc;

@end
