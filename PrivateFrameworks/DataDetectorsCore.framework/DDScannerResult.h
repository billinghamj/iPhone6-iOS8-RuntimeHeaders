/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

@class NSArray;

@interface DDScannerResult : NSObject <NSCoding, NSSecureCoding> {
    struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __DDQueryRange { struct __DDQueryOffset { long long x_1_2_1; long long x_1_2_2; } x_2_1_1; struct __DDQueryOffset { long long x_2_2_1; long long x_2_2_2; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; } *_coreResult;
    NSArray *_subResultsCache;
}

@property struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

+ (id)resultFromCoreResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __DDQueryRange { struct __DDQueryOffset { long long x_1_2_1; long long x_1_2_2; } x_2_1_1; struct __DDQueryOffset { long long x_2_2_1; long long x_2_2_2; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; }*)arg1;
+ (id)resultsFromCoreResults:(struct __CFArray { }*)arg1;
+ (bool)supportsSecureCoding;

- (long long)score;
- (id)subResults;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __DDQueryRange { struct __DDQueryOffset { long long x_1_2_1; long long x_1_2_2; } x_2_1_1; struct __DDQueryOffset { long long x_2_2_1; long long x_2_2_2; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; }*)coreResult;
- (bool)getStreet:(id*)arg1 city:(id*)arg2 state:(id*)arg3 zip:(id*)arg4 country:(id*)arg5;
- (bool)getIMScreenNameValue:(id*)arg1 type:(id*)arg2;
- (bool)getMailValue:(id*)arg1 label:(id*)arg2;
- (bool)getPhoneValue:(id*)arg1 label:(id*)arg2;
- (bool)extractStartDate:(id*)arg1 startTimezone:(id*)arg2 endDate:(id*)arg3 endTimezone:(id*)arg4 allDayRef:(bool*)arg5 referenceDate:(id)arg6 referenceTimezone:(id)arg7;
- (id)dateFromReferenceDate:(id)arg1 referenceTimezone:(id)arg2 timezoneRef:(id*)arg3 allDayRef:(bool*)arg4;
- (double)getDuration;
- (struct { long long x1; long long x2; })cfRange;
- (void)setSubResults:(id)arg1;
- (id)contextualData;
- (id)rawValue;
- (id)matchedString;
- (id)initWithCoreResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __DDQueryRange { struct __DDQueryOffset { long long x_1_2_1; long long x_1_2_2; } x_2_1_1; struct __DDQueryOffset { long long x_2_2_1; long long x_2_2_2; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; }*)arg1;
- (void)offsetRangeBy:(long long)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)location;
- (id)valueForUndefinedKey:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)value;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)description;
- (bool)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end