/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class NSOperationQueue, UIPDFDocument;

@interface UIPDFPageImageCache : NSObject  {
    UIPDFDocument *_document;
    unsigned long long _lookAhead;
    unsigned long long _jobCount;
    id *_jobsPrioritized;
    unsigned long long _nextJobIndex;
    unsigned long long _pageCount;
    id *_jobsByPage;
    NSOperationQueue *_renderQueue;
    int _lock;
}

@property(readonly) UIPDFDocument * document;
@property(readonly) unsigned long long pageCount;
@property(readonly) unsigned long long lookAhead;


- (void)cancelPendingRenderOperationsForTarget:(id)arg1;
- (void)cancelPendingRenderOperations;
- (void)cacheImageOfPage:(unsigned long long)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)lookAhead;
- (void)addRenderJob:(id)arg1;
- (void)deliverImageOfPage:(unsigned long long)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2 quality:(bool*)arg3 receiver:(id)arg4 selector:(SEL)arg5 info:(id)arg6;
- (id)getImageIfAvailableForPage:(unsigned long long)arg1;
- (id)initWithDocument:(id)arg1 cacheCount:(unsigned long long)arg2 lookAhead:(unsigned long long)arg3;
- (void)clearCache;
- (id)initWithDocument:(id)arg1;
- (id)document;
- (void)didReceiveMemoryWarning:(id)arg1;
- (unsigned long long)pageCount;
- (void)dealloc;

@end
