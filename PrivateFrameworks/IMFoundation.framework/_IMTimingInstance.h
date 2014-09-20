/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface _IMTimingInstance : NSObject  {
    double _startTiming;
    double _stopTiming;
    double _totalTime;
    bool_isRunning;
}

@property double totalTime;
@property bool isRunning;

+ (id)createTimingInstanceWithStartTime:(float)arg1;

- (void)setIsRunning:(bool)arg1;
- (void)setTotalTime:(double)arg1;
- (double)totalTime;
- (void)stopUsingTime:(double)arg1;
- (void)startUsingTime:(double)arg1;
- (bool)isRunning;
- (id)description;
- (id)init;

@end