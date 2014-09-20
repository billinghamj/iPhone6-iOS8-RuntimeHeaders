/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSMutableDictionary, NSMutableArray;

@interface UIKBTree : NSObject <NSCopying> {
    int type;
    NSString *name;
    NSMutableDictionary *properties;
    NSMutableArray *subtrees;
    NSMutableDictionary *cache;
    NSString *layoutTag;
}

@property int type;
@property(retain) NSString * name;
@property(retain) NSMutableDictionary * properties;
@property(retain) NSMutableArray * subtrees;
@property(retain) NSMutableDictionary * cache;
@property(retain) NSString * layoutTag;

+ (id)mergeStringForKeyName:(id)arg1;
+ (bool)shouldSkipCacheString:(id)arg1;
+ (id)treeOfType:(int)arg1;
+ (id)shapesForControlKeyShapes:(id)arg1 options:(int)arg2;
+ (long long)extraIPhoneIdiom:(long long)arg1 width:(double)arg2 landscape:(bool)arg3;
+ (id)stringForType:(int)arg1;
+ (id)uniqueName;
+ (id)key;
+ (id)keyboard;

- (id)initWithType:(int)arg1 withName:(id)arg2 withProperties:(id)arg3 withSubtrees:(id)arg4 withCache:(id)arg5;
- (bool)renderKeyInKeyplane:(id)arg1;
- (id)cacheDisplayString;
- (id)variantDisplayString;
- (bool)avoidAutoDeactivation;
- (double)fadeOutDuration;
- (bool)canFadeOutFromState:(int)arg1 toState:(int)arg2;
- (void)setForceMultitap:(bool)arg1;
- (void)setSplitMode:(int)arg1;
- (int)splitMode;
- (void)setGhost:(bool)arg1;
- (void)setActiveGeometriesList:(id)arg1;
- (void)setGeometriesList:(id)arg1;
- (bool)looksLike:(id)arg1;
- (long long)handBias;
- (bool)isLetters;
- (bool)usesAdaptiveKeys;
- (id)geometriesOrderedByPosition;
- (id)keysOrderedByPosition;
- (void)clearTransientCaches;
- (id)keyAttributes;
- (void)setAttributes:(id)arg1;
- (id)keyForString:(id)arg1;
- (bool)subtreesAreOrdered;
- (void)zipAttributes;
- (int)indexOfSubtree:(id)arg1;
- (id)subtreesWithProperty:(id)arg1 value:(id)arg2;
- (id)subtreeWithName:(id)arg1 rows:(id)arg2;
- (bool)isDuplicateOfTree:(id)arg1;
- (bool)isEqualToTree:(id)arg1;
- (bool)isHashed;
- (id)nameFromAttributes;
- (bool)_renderAsStringKey;
- (void)setVariantType:(int)arg1;
- (int)_variantType;
- (id)activeGeometriesList;
- (void)updateDictationKeyOnNumberPads:(bool)arg1;
- (id)findLeftMoreKey;
- (void)subsumeDisappearingKeyName:(id)arg1 intoKeyName:(id)arg2 factors:(id)arg3;
- (id)subtreeWithType:(int)arg1;
- (id)geometries;
- (void)_addKeylayoutKeys:(id)arg1;
- (void)cacheKey:(id)arg1;
- (bool)shouldCacheKey;
- (id)_cacheRootNameForKey:(id)arg1;
- (id)unhashedName;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })stylingFromVisualStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_keyplaneFrame;
- (id)activeShapesFromOutputShapes:(id)arg1 inputShapes:(id)arg2;
- (id)geometriesList;
- (long long)_keyCountOnNamedRow:(id)arg1;
- (id)listShapes;
- (void)zipGeometries:(bool)arg1 attributes:(bool)arg2;
- (id)attributeSet:(bool)arg1;
- (id)geometrySet:(bool)arg1;
- (bool)_needsScaling;
- (bool)isGenerated;
- (bool)isSameAsTree:(id)arg1;
- (void)setCache:(id)arg1;
- (bool)isLeafType;
- (void)setProperties:(id)arg1;
- (double)primaryKeylayoutOffset;
- (bool)dynamicDisplayTypeHint;
- (id)properties;
- (void)orderVariantKeys:(bool)arg1;
- (id)variantPopupBias;
- (bool)boolForProperty:(id)arg1;
- (int)variantType;
- (bool)behavesAsShiftKey;
- (long long)highlightedVariantIndex;
- (long long)flickDirection;
- (int)dragThreshold;
- (bool)modifiesKeyplane;
- (id)alternateKeyplaneName;
- (bool)disablesEdgeSwipe;
- (double)primaryKeylayoutWidthRatio;
- (bool)avoidsLanguageIndicator;
- (bool)setObject:(id)arg1 forProperty:(id)arg2;
- (id)keysOrderedByPositionWithoutZip;
- (bool)noLanguageIndicator;
- (void)setVariantPopupBias:(id)arg1;
- (void)updateVariantTypeForActions:(unsigned int)arg1;
- (id)componentName;
- (bool)hasLayoutTag:(id)arg1;
- (bool)forceMultitap;
- (bool)shouldSkipCandidateSelectionForVariants;
- (bool)usesKeyCharging;
- (bool)isExemptFromInputManagerLayout;
- (bool)isExemptFromInputManagerHitTesting;
- (bool)supportsType:(long long)arg1;
- (void)updateMoreAndInternationalKeysWithOptions:(int)arg1;
- (void)mergeKeyNames:(id)arg1;
- (id)keysForMergeConditions;
- (id)cache;
- (bool)notUseCandidateSelection;
- (void)setFlickDirection:(long long)arg1;
- (void)setDisplayRowHint:(int)arg1;
- (id)numberForProperty:(id)arg1;
- (id)keySet;
- (void)elaborateLayoutWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (void)precacheLayoutName:(id)arg1;
- (void)setIsGenerated:(bool)arg1;
- (void)zipGeometrySet;
- (void)setOverrideDisplayString:(id)arg1;
- (id)firstCachedKeyWithName:(id)arg1;
- (id)keysByKeyName:(id)arg1;
- (id)shiftAlternateKeyplaneName;
- (bool)isShiftKeyplane;
- (bool)looksLikeShiftAlternate;
- (id)localizationKey;
- (id)autolocalizedKeyCacheIterator;
- (void)setDisplayTypeHint:(int)arg1;
- (id)representedString;
- (id)fullRepresentedString;
- (id)keys;
- (id)keysWithString:(id)arg1;
- (id)subtreeWithName:(id)arg1;
- (id)stringForProperty:(id)arg1;
- (id)layoutName;
- (id)cachedKeysByKeyName:(id)arg1;
- (void)setFrameOnly:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGeometry:(id)arg1;
- (void)setClipCorners:(int)arg1;
- (int)displayTypeHint;
- (id)overrideDisplayString;
- (bool)ghost;
- (long long)intForProperty:(id)arg1;
- (int)rendering;
- (int)displayRowHint;
- (int)visualStyle;
- (void)setDisabled:(bool)arg1;
- (bool)disabled;
- (void)setHighlightedVariantIndex:(long long)arg1;
- (void)setSubtrees:(id)arg1;
- (void)setShape:(id)arg1;
- (id)shape;
- (void)setRendering:(int)arg1;
- (void)setInteractionType:(int)arg1;
- (void)setDisplayType:(int)arg1;
- (void)setRepresentedString:(id)arg1;
- (void)setDisplayString:(id)arg1;
- (id)subtrees;
- (int)interactionType;
- (int)clipCorners;
- (void)setVisualStyle:(int)arg1;
- (void)setPaddedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paddedFrame;
- (id)geometry;
- (int)displayType;
- (id)keyplaneForKey:(id)arg1;
- (bool)isShiftKeyPlaneChooser;
- (bool)visible;
- (bool)shouldSkipCandidateSelection;
- (bool)usesAutoShift;
- (id)displayString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForKeylayoutName:(id)arg1;
- (void)setLayoutTag:(id)arg1;
- (id)layoutTag;
- (bool)isAlphabeticPlane;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })visualStyling;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1;
- (bool)isSplit;
- (long long)textAlignment;
- (void)setVisible:(bool)arg1;
- (id)recursiveDescription;
- (id)initWithType:(int)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setState:(int)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)state;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end