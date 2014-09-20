/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface CAFilter : NSObject <NSCopying, NSMutableCopying, NSCoding> {
    unsigned int _type;
    NSString *_name;
    unsigned int _flags;
    void *_attr;
    void *_cache;
}

@property(readonly) NSString * type;
@property(copy) NSString * name;
@property(getter=isEnabled) bool enabled;
@property bool cachesInputImage;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)filterWithType:(id)arg1;
+ (id)filterWithName:(id)arg1;
+ (id)filterTypes;
+ (void)CAMLParserStartElement:(id)arg1;

- (id)initWithName:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)enabled;
- (bool)isEnabled;
- (void)setCachesInputImage:(bool)arg1;
- (id)initWithType:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)setDefaults;
- (bool)cachesInputImage;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;

@end