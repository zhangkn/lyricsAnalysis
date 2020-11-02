//
//  KNAnalyzer.h
//  lyricsAnalysis
//
//  Created by mac on 2020/11/2.
//  Copyright © 2020 kunnan.blog.csdn.net. All rights reserved.
//
#import "KNLrcModel.h"

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface KNAnalyzer : NSObject


@property(nonatomic,strong)NSMutableArray * lrcArray;

/**
 //返回包含每一句歌词信息的数组

 NSString * path = [[NSBundle mainBundle] pathForResource:SONGNAME ofType:@"txt"];
 */
-(NSMutableArray *)analyzerLrcByPath:(NSString *)path;

/**
 ////解析每一行歌词字符，获得时间点和对应的歌词模型KNLrcModel数组
 self.lrcArray =  [analyzer analyzerLrcBylrcString:[NSString  stringWithContentsOfFile:path encoding:NSUTF8StringEncoding error:nil]];
 
 实现逻辑：根据换行符“\n“分割字符串，获得包含每一行歌词字符串的数组，然后解析每一行歌词字符，获得时间点和对应的歌词，再用创建的歌词对象模型存储时间点和歌词，最后得到一个存储wslLrcEach对象的数组。


 */
-(NSMutableArray *)analyzerLrcBylrcString:(NSString *)string;



@end

NS_ASSUME_NONNULL_END
