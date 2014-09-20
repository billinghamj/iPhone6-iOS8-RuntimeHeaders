/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSObject<OS_xpc_object>, <NSXPCEncoderDelegate>, NSXPCConnection;

@interface NSXPCEncoder : NSXPCCoder  {
    NSObject<OS_xpc_object> *_oolObjects;
    NSXPCConnection *_connection;
    struct __CFDictionary { } *_replacedObjects;
    struct __CFDictionary { } *_replacedByDelegateObjects;
    <NSXPCEncoderDelegate> *_delegate;
    bool_askForReplacement;
    void **_encoder;
    unsigned long long _genericIndex;
}

@property NSXPCConnection * _connection;
@property <NSXPCEncoderDelegate> * delegate;

+ (id)_dataWithXPCObject:(id)arg1;

- (void)finalize;
- (void)encodeObject:(id)arg1;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (id)_connection;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (bool)allowsKeyedCoding;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (id)delegate;
- (id)debugDescription;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (id)_createRootXPCObject;
- (void)_encodeObject:(id)arg1;
- (void)_checkObject:(id)arg1;
- (id)_replaceObject:(id)arg1;
- (void)encodeInvocation:(id)arg1;
- (void)_encodeCString:(const char *)arg1 forKey:(id)arg2;
- (void)_insertIntoXPCObject:(id)arg1;
- (void)set_connection:(id)arg1;
- (void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2;
- (void)encodeDataObject:(id)arg1;

@end