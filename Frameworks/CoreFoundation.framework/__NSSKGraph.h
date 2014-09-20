/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSSKGraph : NSObject  {
    struct edge { unsigned long long x1; unsigned long long x2[2]; unsigned long long x3; } *_edges;
    struct vertex { unsigned long long x1; unsigned long long x2; unsigned long long *x3; } *_vertices;
    unsigned long long _numV;
    unsigned long long _numE;
    unsigned long long _currE;
    unsigned long long _dump;
    unsigned long long _l_end;
}


- (void)finalize;
- (bool)isEmpty;
- (void)dealloc;
- (struct edge {}**)isAcyclic;
- (unsigned long long)numOfEdges;
- (bool)addEdgeWithH1:(unsigned long long)arg1 withH2:(unsigned long long)arg2;
- (id)initWithNumberOfVertices:(long long)arg1 numberOfEdges:(long long)arg2;

@end