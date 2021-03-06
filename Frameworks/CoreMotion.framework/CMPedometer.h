/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class CMPedometerProxy;

@interface CMPedometer : NSObject  {
    CMPedometerProxy *_pedometerProxy;
}

@property(readonly) CMPedometerProxy * pedometerProxy;

+ (bool)isFloorCountingAvailable;
+ (bool)isDistanceAvailable;
+ (bool)isStepCountingAvailable;

- (id)init;
- (void)dealloc;
- (void)queryPedometerDataSinceRecord:(long long)arg1 withHandler:(id)arg2;
- (void)stopPedometerUpdates;
- (void)startPedometerUpdatesFromDate:(id)arg1 withHandler:(id)arg2;
- (void)queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(id)arg3;
- (id)pedometerProxy;

@end
