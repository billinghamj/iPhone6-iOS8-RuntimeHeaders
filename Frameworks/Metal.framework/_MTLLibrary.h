/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, <MTLDevice>, NSArray, NSMutableDictionary;

@interface _MTLLibrary : NSObject <MTLLibrary> {
    NSString *_label;
    <MTLDevice> *_device;
    NSArray *_functionNames;
    NSMutableDictionary *_functionDictionary;
    struct MTLLibraryData { int (**x1)(); int x2; id x3; } *_libraryData;
}

@property(copy) NSString * label;
@property(readonly) <MTLDevice> * device;
@property(readonly) NSArray * functionNames;
@property(readonly) struct MTLLibraryData { int (**x1)(); int x2; id x3; }* libraryData;
@property NSMutableDictionary * functionDictionary;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (struct { unsigned int x1; unsigned int x2; })pipelineCacheStats;
+ (struct { unsigned int x1; unsigned int x2; })libraryCacheStats;
+ (void)unloadShaderCaches;

- (id)device;
- (void)setLabel:(id)arg1;
- (id)label;
- (id)description;
- (void)dealloc;
- (void)setFunctionDictionary:(id)arg1;
- (id)functionDictionary;
- (id)initWithSharedLibrary:(id)arg1 device:(id)arg2;
- (id)functionNames;
- (struct MTLLibraryData { int (**x1)(); int x2; id x3; }*)libraryData;
- (id)initWithSource:(id)arg1 options:(id)arg2 device:(id)arg3 completionHandler:(id)arg4;
- (id)initWithSource:(id)arg1 options:(id)arg2 device:(id)arg3 error:(id*)arg4;
- (id)initWithData:(id)arg1 device:(id)arg2 error:(id*)arg3;
- (id)initWithDefaultBundle:(id)arg1;
- (id)initWithFile:(id)arg1 device:(id)arg2 error:(id*)arg3;
- (id)newFunctionWithName:(id)arg1;

@end