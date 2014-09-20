/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIImage, UIPDFPageRenderOperation, UIPDFPage;

@interface UIPDFPageRenderJob : NSObject  {
    UIPDFPage *_page;
    unsigned long long _pageIndex;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
    long long _priority;
    UIImage *_image;
    UIPDFPageRenderOperation *_operation;
    id _target;
    SEL _callback;
    id _userData;
    bool_sendPending;
    bool_releaseWhenDone;
    int _lock;
}

@property(retain,readonly) UIImage * image;
@property UIPDFPageRenderOperation * operation;
@property(readonly) unsigned long long pageIndex;
@property(readonly) long long priority;
@property bool releaseWhenDone;
@property(readonly) struct CGSize { double x1; double x2; } size;


- (void)setReleaseWhenDone:(bool)arg1;
- (bool)releaseWhenDone;
- (void)sendImageTo:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;
- (void)sendImage;
- (void)renderImage;
- (void)releaseOperation;
- (void)setTarget:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;
- (void)cancelOperationForTarget:(id)arg1;
- (void)cancelOperation;
- (id)initWithPage:(id)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2 queuePriority:(long long)arg3;
- (unsigned long long)pageIndex;
- (long long)priority;
- (id)image;
- (void)setOperation:(id)arg1;
- (id)operation;
- (struct CGSize { double x1; double x2; })size;
- (void)dealloc;
- (void)cancel;
- (bool)hasPage;

@end