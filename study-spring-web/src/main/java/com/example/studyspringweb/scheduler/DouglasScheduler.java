package com.example.studyspringweb.scheduler;

import org.elasticsearch.client.Node;
import org.elasticsearch.client.RestClient;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.data.elasticsearch.core.ElasticsearchRestTemplate;
import org.springframework.data.elasticsearch.core.ElasticsearchTemplate;
import org.springframework.data.elasticsearch.repository.ElasticsearchRepository;
import org.springframework.scheduling.annotation.Scheduled;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class DouglasScheduler {
    private static final Logger logger = LoggerFactory.getLogger(DouglasScheduler.class);
    @Qualifier("elasticsearchRestClient")
    @Autowired
    private RestClient elasticsearchRestClient;
    @Autowired
    private ElasticsearchRestTemplate elasticsearchRestTemplate;
    @Autowired
    private ElasticsearchTemplate template;
//    @Autowired

    @Scheduled(cron = "0 * * * * *")
    public void doWork() {
        logger.info("start douglas scheduler...");
        List<Node> nodes = elasticsearchRestClient.getNodes();

    }

}
